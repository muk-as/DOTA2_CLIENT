#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CEconItemAttribute.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAttributeManager;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CEconItemAttribute m_Attributes"
        #pragma pack(push, 1)
        class CAttributeList
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
            // m_Attributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CEconItemAttribute> m_Attributes;
            char m_Attributes[0x68]; // 0x8            
            source2sdk::server::CAttributeManager* m_pManager; // 0x70            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAttributeList, m_Attributes) == 0x8);
        static_assert(offsetof(source2sdk::server::CAttributeList, m_pManager) == 0x70);
        
        static_assert(sizeof(source2sdk::server::CAttributeList) == 0x78);
    };
};
