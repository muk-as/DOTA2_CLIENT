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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallStartPosition; // 0x_            
            Vector m_vWallDirection; // 0x_            
            Vector m_vWallLeft; // 0x_            
            std::int32_t m_DamageAmount; // 0x_            
            std::int32_t m_DamageType; // 0x_            
            float speed; // 0x_            
            float starting_width; // 0x_            
            float ending_width; // 0x_            
            float stun_duration; // 0x_            
            float fly_duration; // 0x_            
            float fly_distance; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::entity2::GameTime_t m_flWallStartTime; // 0x_            
            float m_flScalar; // 0x_            
            // m_EntitiesToExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesToExclude;
            char m_EntitiesToExclude[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_Wall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Tail_Swipe_Wall) == 0x_);
    };
};
