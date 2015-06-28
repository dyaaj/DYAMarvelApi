//
//  DYAMarvelDataContainer.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <Foundation/Foundation.h>
#import <JSONModel/JSONModel.h>

@interface DYAMarvelDataContainer : JSONModel

@property (assign, nonatomic) NSInteger offset;
@property (assign, nonatomic) NSInteger limit;
@property (assign, nonatomic) NSInteger total;
@property (assign, nonatomic) NSInteger count;

@end
