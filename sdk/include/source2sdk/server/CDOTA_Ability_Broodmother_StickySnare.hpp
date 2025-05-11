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
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Broodmother_StickySnare : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vEndpoint; // 0x5b8            
            float duration; // 0x5c4            
            float width; // 0x5c8            
            bool m_bStolenSnareCheck; // 0x5cc            
            uint8_t _pad05cd[0x1b]; // 0x5cd
            // m_vecSnares has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecSnares;
            char m_vecSnares[0x18]; // 0x5e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_StickySnare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Broodmother_StickySnare) == 0x600);
    };
};
