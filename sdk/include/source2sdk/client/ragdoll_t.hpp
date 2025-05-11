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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        #pragma pack(push, 1)
        struct ragdoll_t
        {
        public:
            // list has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ragdollelement_t> list;
            char list[0x18]; // 0x0            
            // hierarchyJoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ragdollhierarchyjoint_t> hierarchyJoints;
            char hierarchyJoints[0x18]; // 0x18            
            // boneIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> boneIndex;
            char boneIndex[0x18]; // 0x30            
            bool allowStretch; // 0x48            
            bool unused; // 0x49            
            uint8_t _pad004a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ragdoll_t, list) == 0x0);
        static_assert(offsetof(source2sdk::client::ragdoll_t, hierarchyJoints) == 0x18);
        static_assert(offsetof(source2sdk::client::ragdoll_t, boneIndex) == 0x30);
        static_assert(offsetof(source2sdk::client::ragdoll_t, allowStretch) == 0x48);
        static_assert(offsetof(source2sdk::client::ragdoll_t, unused) == 0x49);
        
        static_assert(sizeof(source2sdk::client::ragdoll_t) == 0x50);
    };
};
