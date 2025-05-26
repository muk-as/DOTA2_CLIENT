#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathSimple.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CMoverPathNode;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x640
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathMover : public source2sdk::server::CPathSimple
        {
        public:
            // m_vecPathNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CMoverPathNode>> m_vecPathNodes;
            char m_vecPathNodes[0x18]; // 0x5f0            
            uint8_t _pad0608[0x8]; // 0x608
            CTransform m_xInitialPathWorldToLocal; // 0x610            
            bool m_bClosedLoop; // 0x630            
            uint8_t _pad0631[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathMover) == 0x640);
    };
};
