#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        class CCommentaryAuto : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnCommentaryNewGame; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnCommentaryMidGame; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x_            
            
            // Datamap fields:
            // void InputMultiplayerSpawned; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCommentaryAuto because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCommentaryAuto) == 0x_);
    };
};
