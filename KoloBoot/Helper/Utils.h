//
//  Utils.h
//  KoloBoot
//
//  Created by Abu Muhammad on 11/04/18.
//  Copyright © 2018 Abu Muhammad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <string>

@interface Utils : NSObject
+ (NSString *)toNSString:(std::string)str;
@end
