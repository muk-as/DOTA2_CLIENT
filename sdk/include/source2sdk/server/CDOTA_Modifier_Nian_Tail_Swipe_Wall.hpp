#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1908
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallStartPosition; // 0x1888            
            Vector m_vWallDirection; // 0x1894            
            Vector m_vWallLeft; // 0x18a0            
            std::int32_t m_DamageAmount; // 0x18ac            
            std::int32_t m_DamageType; // 0x18b0            
            float speed; // 0x18b4            
            float starting_width; // 0x18b8            
            float ending_width; // 0x18bc            
            float stun_duration; // 0x18c0            
            float fly_duration; // 0x18c4            
            float fly_distance; // 0x18c8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18cc            
            source2sdk::entity2::GameTime_t m_flWallStartTime; // 0x18d0            
            float m_flScalar; // 0x18d4            
            // m_EntitiesToExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesToExclude;
            char m_EntitiesToExclude[0x18]; // 0x18d8            
            uint8_t _pad18f0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_Wall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Tail_Swipe_Wall) == 0x1908);
    };
};
