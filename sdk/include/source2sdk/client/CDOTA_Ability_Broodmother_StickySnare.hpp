#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Broodmother_StickySnare : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vEndpoint; // 0x688            
            float duration; // 0x694            
            float width; // 0x698            
            bool m_bStolenSnareCheck; // 0x69c            
            uint8_t _pad069d[0x1b]; // 0x69d
            // m_vecSnares has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecSnares;
            char m_vecSnares[0x18]; // 0x6b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_StickySnare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Broodmother_StickySnare) == 0x6d0);
    };
};
