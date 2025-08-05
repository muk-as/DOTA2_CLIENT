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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Meepo_MegaMeepo : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // hPreviousMeepo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hPreviousMeepo;
            char hPreviousMeepo[0x4]; // 0x688            
            // hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hMegameepoFrame;
            char hMegameepoFrame[0x4]; // 0x68c            
            // hListOfMeepos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hListOfMeepos;
            char hListOfMeepos[0x18]; // 0x690            
            bool m_bHasSwappedAbilities; // 0x6a8            
            uint8_t _pad06a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Meepo_MegaMeepo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Meepo_MegaMeepo) == 0x6b0);
    };
};
