//
//  PathController.m
//  KoloBoot
//
//  Created by Abu Muhammad on 08/04/18.
//  Copyright © 2018 Abu Muhammad. All rights reserved.
//

#import "PathController.h"
#import "RequestPopupController.h"
#import "DBManager.hpp"
#import "Path.hpp"

@interface PathController ()

@end

@implementation PathController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)chooseRequestAction:(id)sender {
    RequestPopupController *reqPop = [[RequestPopupController alloc] initWithNibName:@"RequestPopupController" bundle:nil];
    [reqPop show];
    Model::Path pth;
    pth.setType("makan");
    
    std::cout << pth.getType<std::string>() << std::endl;
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
