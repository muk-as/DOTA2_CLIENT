#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDotaSubquestBase.hpp"

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
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaSubquestTutorialEvent : public source2sdk::server::CDotaSubquestBase
        {
        public:
            CUtlSymbolLarge m_sTutorialEvent; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaSubquestTutorialEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaSubquestTutorialEvent) == 0x_);
    };
};
