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
        // Size: 0x1868
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallStartPosition; // 0x17f8            
            Vector m_vWallDirection; // 0x1804            
            Vector m_vWallLeft; // 0x1810            
            std::int32_t m_DamageAmount; // 0x181c            
            std::int32_t m_DamageType; // 0x1820            
            float speed; // 0x1824            
            float starting_width; // 0x1828            
            float ending_width; // 0x182c            
            float stun_duration; // 0x1830            
            float fly_duration; // 0x1834            
            float fly_distance; // 0x1838            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x183c            
            source2sdk::entity2::GameTime_t m_flWallStartTime; // 0x1840            
            float m_flScalar; // 0x1844            
            // m_EntitiesToExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesToExclude;
            char m_EntitiesToExclude[0x18]; // 0x1848            
            uint8_t _pad1860[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_Wall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Tail_Swipe_Wall) == 0x1868);
    };
};
