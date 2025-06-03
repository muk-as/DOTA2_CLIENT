#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Lunge_TrackingMotion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nProjectileID; // 0x1878            
            std::int32_t m_nMaxJumpDistance; // 0x187c            
            float landing_radius; // 0x1880            
            std::int32_t max_jump_distance; // 0x1884            
            std::int32_t min_jump_distance; // 0x1888            
            std::int32_t target_abort_distance; // 0x188c            
            std::int32_t impact_position_offset; // 0x1890            
            float m_flCastDistance; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nAoEFXIndex; // 0x1898            
            Vector m_vDestination; // 0x189c            
            // m_hBounceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBounceEntity;
            char m_hBounceEntity[0x4]; // 0x18a8            
            // m_hBounceEntityClient has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBounceEntityClient;
            char m_hBounceEntityClient[0x4]; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_TrackingMotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Lunge_TrackingMotion) == 0x18b0);
    };
};
