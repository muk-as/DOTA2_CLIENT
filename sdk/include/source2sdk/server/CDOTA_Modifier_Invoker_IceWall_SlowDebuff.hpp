#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_SlowDebuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x1888            
            float damage_per_second; // 0x188c            
            std::int32_t vector_cast_range; // 0x1890            
            float root_delay; // 0x1894            
            float root_duration; // 0x1898            
            float root_damage; // 0x189c            
            float tick_interval; // 0x18a0            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x18a4            
            source2sdk::entity2::GameTime_t m_NextDPSTime; // 0x18a8            
            source2sdk::entity2::GameTime_t m_NextRootTime; // 0x18ac            
            bool m_bRootTriggered; // 0x18b0            
            uint8_t _pad18b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_SlowDebuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_IceWall_SlowDebuff) == 0x18b8);
    };
};
