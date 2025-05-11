#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x38
        // Has VTable
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CScriptComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x28]; // 0x8
            CUtlSymbolLarge m_scriptClassName; // 0x30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::entity2::CScriptComponent) == 0x38);
    };
};
