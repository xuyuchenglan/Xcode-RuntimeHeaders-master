/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct msgpack_object {
    int _field1;
    union {
        _Bool _field1;
        unsigned long long _field2;
        long long _field3;
        double _field4;
        struct {
            unsigned int _field1;
            struct msgpack_object *_field2;
        } _field5;
        struct {
            unsigned int _field1;
            struct msgpack_object_kv *_field2;
        } _field6;
        struct {
            unsigned int _field1;
            char *_field2;
        } _field7;
    } _field2;
};

struct msgpack_object_kv;

struct msgpack_sbuffer {
    unsigned long long _field1;
    char *_field2;
    unsigned long long _field3;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

