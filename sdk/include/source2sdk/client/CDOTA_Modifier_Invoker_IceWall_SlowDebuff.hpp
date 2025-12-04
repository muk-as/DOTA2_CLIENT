#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_SlowDebuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x_            
            float damage_per_second; // 0x_            
            std::int32_t vector_cast_range; // 0x_            
            float root_delay; // 0x_            
            float root_duration; // 0x_            
            float root_damage; // 0x_            
            float tick_interval; // 0x_            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_NextDPSTime; // 0x_            
            source2sdk::entity2::GameTime_t m_NextRootTime; // 0x_            
            bool m_bRootTriggered; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_SlowDebuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_IceWall_SlowDebuff) == 0x_);
    };
};
