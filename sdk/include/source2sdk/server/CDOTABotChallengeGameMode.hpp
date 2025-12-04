#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseGameMode.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flEndgameTime"
        #pragma pack(push, 1)
        class CDOTABotChallengeGameMode : public source2sdk::server::CDOTABaseGameMode
        {
        public:
            bool m_bHasStartedEndgame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hRadiantAncientNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hRadiantAncientNPC;
            char m_hRadiantAncientNPC[0x_]; // 0x_            
            // m_hDireAncientNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hDireAncientNPC;
            char m_hDireAncientNPC[0x_]; // 0x_            
            // metadata: MNetworkEnable
            float m_flEndgameTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABotChallengeGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABotChallengeGameMode) == 0x_);
    };
};
