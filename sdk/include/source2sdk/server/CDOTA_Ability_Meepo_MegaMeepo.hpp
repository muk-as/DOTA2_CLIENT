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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Meepo_MegaMeepo : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hPreviousMeepo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hPreviousMeepo;
            char hPreviousMeepo[0x_]; // 0x_            
            // hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hMegameepoFrame;
            char hMegameepoFrame[0x_]; // 0x_            
            // hListOfMeepos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hListOfMeepos;
            char hListOfMeepos[0x_]; // 0x_            
            bool m_bHasSwappedAbilities; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Meepo_MegaMeepo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Meepo_MegaMeepo) == 0x_);
    };
};
