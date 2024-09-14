#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_ManaclesOfPower_Effect : public client::CDOTA_Buff
    {
    public:
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x16e8        
        client::ParticleIndex_t m_nFXIndex; // 0x16ec        
        float leash_distance; // 0x16f0        
        float leash_limit_multiplier; // 0x16f4        
        // m_hAnchor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAnchor;
        char m_hAnchor[0x4]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_ManaclesOfPower_Effect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_ManaclesOfPower_Effect) == 0x1700);
};
