#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Ability_Invoker_InvokedBase.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_DeafeningBlast : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float end_vision_duration; // 0x5d0            
            float damage; // 0x5d4            
            float knockback_duration; // 0x5d8            
            float disarm_duration; // 0x5dc            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x5e0            
            bool m_bGrantedGem; // 0x5f8            
            uint8_t _pad05f9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_DeafeningBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_DeafeningBlast) == 0x600);
    };
};
