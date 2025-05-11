#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCEntityLump.hpp"
#include "source2sdk/worldrenderer/EntityKeyValueData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PermEntityLumpData_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_name; // 0x8            
            // m_childLumps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeCEntityLump>> m_childLumps;
            char m_childLumps[0x18]; // 0x10            
            // m_entityKeyValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::worldrenderer::EntityKeyValueData_t> m_entityKeyValues;
            char m_entityKeyValues[0x10]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::PermEntityLumpData_t, m_name) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::PermEntityLumpData_t, m_childLumps) == 0x10);
        static_assert(offsetof(source2sdk::worldrenderer::PermEntityLumpData_t, m_entityKeyValues) == 0x28);
        
        static_assert(sizeof(source2sdk::worldrenderer::PermEntityLumpData_t) == 0x38);
    };
};
