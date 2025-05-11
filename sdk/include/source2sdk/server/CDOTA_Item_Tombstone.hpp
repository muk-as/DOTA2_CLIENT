#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Tombstone : public source2sdk::server::CDOTA_Item
        {
        public:
            float m_flTimer; // 0x688            
            // m_hParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Item_Tombstone> m_hParent;
            char m_hParent[0x4]; // 0x68c            
            // m_hNextChild has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Item_Tombstone> m_hNextChild;
            char m_hNextChild[0x4]; // 0x690            
            Vector m_vContainerPosition; // 0x694            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6a0            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x6a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Tombstone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Tombstone) == 0x6a8);
    };
};
