#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAxes;
            char m_hAxes[0x18]; // 0x5c0            
            std::int32_t m_nAxeIdx; // 0x5d8            
            uint8_t _pad05dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee) == 0x5e0);
    };
};
