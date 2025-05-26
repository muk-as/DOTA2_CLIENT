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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Meepo_MegaMeepo : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hPreviousMeepo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hPreviousMeepo;
            char hPreviousMeepo[0x4]; // 0x5c0            
            // hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hMegameepoFrame;
            char hMegameepoFrame[0x4]; // 0x5c4            
            // hListOfMeepos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hListOfMeepos;
            char hListOfMeepos[0x18]; // 0x5c8            
            bool m_bHasSwappedAbilities; // 0x5e0            
            uint8_t _pad05e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Meepo_MegaMeepo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Meepo_MegaMeepo) == 0x5e8);
    };
};
