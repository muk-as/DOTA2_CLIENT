#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x808
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncNavObstruction : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07f0[0x10]; // 0x7f0
            bool m_bDisabled; // 0x800            
            bool m_bUseAsyncObstacleUpdate; // 0x801            
            uint8_t _pad0802[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncNavObstruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncNavObstruction) == 0x808);
    };
};
