#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x668
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Tombstone : public server::CDOTA_Item
    {
    public:
        float m_flTimer; // 0x648        
        // m_hParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_Item_Tombstone> m_hParent;
        char m_hParent[0x4]; // 0x64c        
        // m_hNextChild has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_Item_Tombstone> m_hNextChild;
        char m_hNextChild[0x4]; // 0x650        
        Vector m_vContainerPosition; // 0x654        
        client::ParticleIndex_t m_nFXIndex; // 0x660        
        client::ParticleIndex_t m_nFXIndex2; // 0x664        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Tombstone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Tombstone) == 0x668);
};
