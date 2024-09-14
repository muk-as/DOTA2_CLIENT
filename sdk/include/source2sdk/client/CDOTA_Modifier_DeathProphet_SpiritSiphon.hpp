#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DeathProphet_SpiritSiphon : public client::CDOTA_Buff
    {
    public:
        float flSmoothness; // 0x16e8        
        float damage; // 0x16ec        
        float damage_pct; // 0x16f0        
        int32_t drain_range; // 0x16f4        
        float haunt_duration; // 0x16f8        
        int32_t siphon_buffer; // 0x16fc        
        int32_t movement_steal; // 0x1700        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1704        
        client::ParticleIndex_t m_iLinkIndex; // 0x1708        
        int32_t m_nSelfBuffSerialNumber; // 0x170c        
        int32_t m_nTargetDebuffSerialNumber; // 0x1710        
        bool m_bAppliedFear; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        float shard_fear_duration; // 0x1718        
        float shard_consecutive_siphon_duration; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_SpiritSiphon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DeathProphet_SpiritSiphon) == 0x1720);
};
