#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/CVariantDefaultAllocator.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0xb28
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicCase : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_nCase[32]; // 0x4d8            
            std::int32_t m_nShuffleCases; // 0x5d8            
            std::int32_t m_nLastShuffleCase; // 0x5dc            
            std::uint8_t m_uchShuffleCaseMap[32]; // 0x5e0            
            source2sdk::entity2::CEntityIOOutput m_OnCase[32]; // 0x600            
            // m_OnDefault has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CVariantBase<source2sdk::entity2::CVariantDefaultAllocator>> m_OnDefault;
            char m_OnDefault[0x28]; // 0xb00            
            
            // Datamap fields:
            // CUtlSymbolLarge InputValue; // 0x0
            // void InputPickRandom; // 0x0
            // void InputPickRandomShuffle; // 0x0
            // void InputResetShuffle; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicCase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicCase) == 0xb28);
    };
};
