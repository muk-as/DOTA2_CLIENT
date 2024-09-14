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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self : public client::CDOTA_Buff
    {
    public:
        int32_t self_slow; // 0x16e8        
        client::ParticleIndex_t m_nFXIndex; // 0x16ec        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16f0        
        bool m_bFetchingRune; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        Vector m_vPreviousLoc; // 0x16f8        
        int32_t drag_distance; // 0x1704        
        int32_t break_distance; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self) == 0x1710);
};
