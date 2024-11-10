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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Twin_Gate_Warp_Channel : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nfxTargetTp; // 0x1708        
        client::ParticleIndex_t m_nfxTargetTp2; // 0x170c        
        client::ParticleIndex_t m_nfxAmbientFx; // 0x1710        
        client::ParticleIndex_t m_nfxPortal1; // 0x1714        
        client::ParticleIndex_t m_nfxPortal2; // 0x1718        
        // m_hPortal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPortal;
        char m_hPortal[0x4]; // 0x171c        
        // m_hOtherPortal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOtherPortal;
        char m_hOtherPortal[0x4]; // 0x1720        
        Vector m_vStartPosition; // 0x1724        
        float m_flTotalTime; // 0x1730        
        float m_flElapsedTimePortion; // 0x1734        
        float animation_rate; // 0x1738        
        int32_t stop_distance; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Twin_Gate_Warp_Channel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Twin_Gate_Warp_Channel) == 0x1740);
};
