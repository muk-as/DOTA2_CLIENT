#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseCombatCharacter.hpp"

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
        // Size: 0x9c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "uint8 m_nLod"
        #pragma pack(push, 1)
        class NextBotCombatCharacter : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            uint8_t _pad0938[0x88]; // 0x938
            // metadata: MNetworkEnable
            std::uint8_t m_nLod; // 0x9c0            
            bool m_didModelChange; // 0x9c1            
            uint8_t _pad09c2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in NextBotCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::NextBotCombatCharacter) == 0x9c8);
    };
};
