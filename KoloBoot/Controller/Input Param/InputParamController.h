//
//  InputParamController.h
//  KoloBoot
//
//  Created by Abu Muhammad on 12/04/18.
//  Copyright © 2018 Abu Muhammad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InputParamController : UITableViewController <UITextFieldDelegate>
@property (nonatomic, assign) BOOL textFieldBecomeFirstResponder;
@property (nonatomic, weak) IBOutlet UITextField *keyField;
@property (nonatomic, weak) IBOutlet UITextField *valueField;
@end
