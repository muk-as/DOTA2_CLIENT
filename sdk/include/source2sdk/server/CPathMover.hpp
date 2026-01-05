#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathSimple.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFuncMover;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CMoverPathNode;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMoverEntitySpawner;
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
        #pragma pack(push, 1)
        class CPathMover : public source2sdk::server::CPathSimple
        {
        public:
            // m_vecPathNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CMoverPathNode>> m_vecPathNodes;
            char m_vecPathNodes[0x_]; // 0x_            
            // m_vecMovers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CFuncMover>> m_vecMovers;
            char m_vecMovers[0x_]; // 0x_            
            CTransform m_xInitialPathWorldToLocal; // 0x_            
            // m_hMoverSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMoverEntitySpawner> m_hMoverSpawner;
            char m_hMoverSpawner[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszMoverSpawnerName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathMover) == 0x_);
    };
};
