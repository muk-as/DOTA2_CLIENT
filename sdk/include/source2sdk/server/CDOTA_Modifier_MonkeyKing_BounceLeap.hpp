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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_BounceLeap : public client::CDOTA_Buff
    {
    public:
        float give_up_distance; // 0x16e8        
        float ground_jump_distance; // 0x16ec        
        float m_flZDelta; // 0x16f0        
        float perched_day_vision; // 0x16f4        
        float perched_night_vision; // 0x16f8        
        Vector m_vStart; // 0x16fc        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1708        
        Vector m_vTargetPos; // 0x170c        
        float m_flSpeed; // 0x1718        
        bool m_bTargetingEntity; // 0x171c        
        bool m_bGroundToTree; // 0x171d        
        bool m_bTreeToGround; // 0x171e        
        bool m_bTreeToTree; // 0x171f        
        bool m_bIsSpringJump; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x3]; // 0x1721
        float m_fSpringChanneledPercent; // 0x1724        
        int32_t m_nLeapSpeed; // 0x1728        
        client::ParticleIndex_t m_nFXIndex; // 0x172c        
        client::ParticleIndex_t m_nFXIndex2; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BounceLeap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_BounceLeap) == 0x1738);
};
