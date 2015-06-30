//
//  DYAMarvelComic.m
//  Pods
//
//  Created by David Yang on 30/06/2015.
//
//

#import "DYAMarvelComic.h"

@implementation DYAMarvelComic

+ (JSONKeyMapper *)keyMapper {
	return [[JSONKeyMapper alloc] initWithDictionary:@{@"id" : @"identifier", @"description" : @"shortDescription"}];
}

@end
