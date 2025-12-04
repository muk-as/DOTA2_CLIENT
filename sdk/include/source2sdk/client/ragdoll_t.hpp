#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ragdollelement_t.hpp"
#include "source2sdk/client/ragdollhierarchyjoint_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct ragdoll_t
        {
        public:
            // list has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ragdollelement_t> list;
            char list[0x_]; // 0x_            
            // hierarchyJoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ragdollhierarchyjoint_t> hierarchyJoints;
            char hierarchyJoints[0x_]; // 0x_            
            // boneIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> boneIndex;
            char boneIndex[0x_]; // 0x_            
            bool allowStretch; // 0x_            
            bool unused; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ragdoll_t, list) == 0x_);
        static_assert(offsetof(source2sdk::client::ragdoll_t, hierarchyJoints) == 0x_);
        static_assert(offsetof(source2sdk::client::ragdoll_t, boneIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::ragdoll_t, allowStretch) == 0x_);
        static_assert(offsetof(source2sdk::client::ragdoll_t, unused) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ragdoll_t) == 0x_);
    };
};
