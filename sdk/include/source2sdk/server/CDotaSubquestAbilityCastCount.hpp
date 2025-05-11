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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x740
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaSubquestAbilityCastCount : public source2sdk::server::CDotaSubquestBase
        {
        public:
            std::int32_t m_sAbilityNameSymbol; // 0x730            
            std::int32_t m_nTargetCastCount; // 0x734            
            std::int32_t m_nCurrentCastCount; // 0x738            
            bool m_bRequiresChannelSuccess; // 0x73c            
            uint8_t _pad073d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaSubquestAbilityCastCount because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaSubquestAbilityCastCount) == 0x740);
    };
};
