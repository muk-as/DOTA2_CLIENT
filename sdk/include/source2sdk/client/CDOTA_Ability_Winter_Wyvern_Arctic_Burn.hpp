#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Winter_Wyvern_Arctic_Burn : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_BurnedTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_BurnedTargets;
            char m_BurnedTargets[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Winter_Wyvern_Arctic_Burn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Winter_Wyvern_Arctic_Burn) == 0x_);
    };
};
