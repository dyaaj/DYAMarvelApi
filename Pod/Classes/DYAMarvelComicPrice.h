//
//  DYAMarvelComicPrice.h
//  Pods
//
//  Created by David Yang on 30/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelComicPrice
@end

@interface DYAMarvelComicPrice : DYAMarvelModel

@property (strong, nonatomic) NSString *type;
@property (assign, nonatomic) float price;

@end
