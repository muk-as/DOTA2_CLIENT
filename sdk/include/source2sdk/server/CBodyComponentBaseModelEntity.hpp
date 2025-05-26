#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBodyComponentSkeletonInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x520
        // Has VTable
        // Construct disallowed
        #pragma pack(push, 1)
        class CBodyComponentBaseModelEntity : public source2sdk::server::CBodyComponentSkeletonInstance
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CBodyComponentBaseModelEntity) == 0x520);
    };
};
