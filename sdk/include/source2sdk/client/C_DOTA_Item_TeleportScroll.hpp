#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6a0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Item_TeleportScroll : public client::C_DOTA_Item
    {
    public:
        // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTeleportTarget;
        char m_hTeleportTarget[0x4]; // 0x678        
        client::ParticleIndex_t m_nFXOrigin; // 0x67c        
        client::ParticleIndex_t m_nFXDestination; // 0x680        
        Vector m_vDestination; // 0x684        
        int32_t m_iMinDistance; // 0x690        
        float m_flBaseTeleportTime; // 0x694        
        float m_flExtraTeleportTime; // 0x698        
        [[maybe_unused]] std::uint8_t pad_0x69c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_TeleportScroll because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_TeleportScroll) == 0x6a0);
};
