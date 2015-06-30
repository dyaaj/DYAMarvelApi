//
//  DYAMarvelComicDate.h
//  Pods
//
//  Created by David Yang on 30/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelComicDate
@end

@interface DYAMarvelComicDate : DYAMarvelModel

@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSDate *date;

@end
