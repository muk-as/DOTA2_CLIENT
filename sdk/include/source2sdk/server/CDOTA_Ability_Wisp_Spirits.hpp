#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/sSpiritDef.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        class CDOTA_Ability_Wisp_Spirits : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_SpiritDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sSpiritDef> m_SpiritDefs;
            char m_SpiritDefs[0x_]; // 0x_            
            std::int32_t m_nWispDirection; // 0x_            
            std::int32_t spirit_amount; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Wisp_Spirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Wisp_Spirits) == 0x_);
    };
};
