#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x17d0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_TwistedChakram : public client::CDOTA_Buff
    {
    public:
        Vector m_vControlOne; // 0x1708        
        Vector m_vControlTwo; // 0x1714        
        Vector m_vControlThree; // 0x1720        
        Vector m_vControlFour; // 0x172c        
        Vector m_vTargetLoc; // 0x1738        
        Vector m_vOriginalTargetLoc; // 0x1744        
        Vector m_vSourceLoc; // 0x1750        
        Vector m_vMidPoint; // 0x175c        
        Vector m_vEndPoint; // 0x1768        
        int32_t m_nCurrentLeg; // 0x1774        
        float m_flTravelDuration; // 0x1778        
        entity2::GameTime_t m_flBoomerangDieTime; // 0x177c        
        bool m_bReturning; // 0x1780        
        [[maybe_unused]] std::uint8_t pad_0x1781[0x3]; // 0x1781
        int32_t m_nFramesToWait; // 0x1784        
        // m_hChakram has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hChakram;
        char m_hChakram[0x4]; // 0x1788        
        client::ParticleIndex_t m_nChakramFXIndex; // 0x178c        
        client::ParticleIndex_t m_nOldChakramFXindex; // 0x1790        
        [[maybe_unused]] std::uint8_t pad_0x1794[0x4]; // 0x1794
        // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecUniqueHitList;
        char m_vecUniqueHitList[0x18]; // 0x1798        
        float radius; // 0x17b0        
        int32_t spread; // 0x17b4        
        int32_t damage; // 0x17b8        
        float pass_slow_duration; // 0x17bc        
        float min_throw_duration; // 0x17c0        
        float max_throw_duration; // 0x17c4        
        [[maybe_unused]] std::uint8_t pad_0x17c8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_TwistedChakram because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_TwistedChakram) == 0x17d0);
};
