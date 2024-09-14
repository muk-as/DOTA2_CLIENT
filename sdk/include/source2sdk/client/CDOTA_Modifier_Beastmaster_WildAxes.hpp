#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1790
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Beastmaster_WildAxes : public client::CDOTA_Buff
    {
    public:
        Vector m_vLeftControl; // 0x16e8        
        Vector m_vRightControl; // 0x16f4        
        Vector m_vTargetLoc; // 0x1700        
        Vector m_vSourceLoc; // 0x170c        
        float m_flAxeDuration; // 0x1718        
        entity2::GameTime_t m_flAxeDieTime; // 0x171c        
        bool m_bReturning; // 0x1720        
        bool m_bCatchingAxes; // 0x1721        
        [[maybe_unused]] std::uint8_t pad_0x1722[0x6]; // 0x1722
        // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAxes;
        char m_hAxes[0x18]; // 0x1728        
        client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x1740        
        // m_hHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitList[2];
        char m_hHitList[0x30]; // 0x1748        
        int32_t radius; // 0x1778        
        int32_t spread; // 0x177c        
        int32_t axe_damage; // 0x1780        
        float duration; // 0x1784        
        float min_throw_duration; // 0x1788        
        float max_throw_duration; // 0x178c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_WildAxes because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Beastmaster_WildAxes) == 0x1790);
};
