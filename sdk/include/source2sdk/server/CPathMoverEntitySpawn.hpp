#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CFuncMover;
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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CPathMoverEntitySpawn
        {
        public:
            // hMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncMover> hMover;
            char hMover[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // vecOtherEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> vecOtherEntities;
            char vecOtherEntities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CPathMoverEntitySpawn, hMover) == 0x_);
        static_assert(offsetof(source2sdk::server::CPathMoverEntitySpawn, vecOtherEntities) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CPathMoverEntitySpawn) == 0x_);
    };
};
