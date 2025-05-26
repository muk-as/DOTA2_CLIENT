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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x690
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nQuasLevel"
        // static metadata: MNetworkVarNames "int m_nWexLevel"
        // static metadata: MNetworkVarNames "int m_nExortLevel"
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_InvokedBase : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nQuasLevel; // 0x680            
            // metadata: MNetworkEnable
            std::int32_t m_nWexLevel; // 0x684            
            // metadata: MNetworkEnable
            std::int32_t m_nExortLevel; // 0x688            
            uint8_t _pad068c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_InvokedBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Invoker_InvokedBase) == 0x690);
    };
};
