//
//  DYAMarvelCharacter.m
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelCharacter.h"

@implementation DYAMarvelCharacter

+ (JSONKeyMapper *)keyMapper {
    return [[JSONKeyMapper alloc] initWithDictionary:@{@"id": @"identifier", @"description" : @"shortDescription" }];
}

@end
