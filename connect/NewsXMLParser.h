//
//  XMLParser.h
//  connect
//
//  Created by Taylor Cuilty on 2/28/14.
//  Copyright (c) 2014 Oregon State University. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"
#import "News.h"

@interface NewsXMLParser : NSObject <NSXMLParserDelegate> {
    
    NSManagedObjectContext *managedObjectContext;
    News *theNews;
    NSMutableString *currentElementValue;
}

@property (strong, nonatomic) NSMutableArray *xmlArray;

-(id)initParser;

@end