//
//  DYAViewController.m
//  DYAMarvelApi
//
//  Created by David Yang on 06/28/2015.
//  Copyright (c) 2014 David Yang. All rights reserved.
//

#import "DYAViewController.h"

#import <DYAMarvelApi/DYAMarvelApi.h>

@interface DYAViewController ()

@end

@implementation DYAViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSLog(@"View did load");
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
    NSLog(@"View did appear");
    
    [[DYAMarvelApi sharedApi] setApiKey:@"6d298b0e00e01137caa456c7638884ca"];
    [[DYAMarvelApi sharedApi] setHeaderReferer:@"developer.marvel.com"];
    
    [[DYAMarvelApi sharedApi] getCharacterWithId:@"1011334" success:^(DYAMarvelResponse *response) {
        NSLog(@"success : %@", response);
    } failure:^(NSError *error) {
        NSLog(@"failed...");
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
